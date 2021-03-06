//
//  ACalcBrain.h
//  ACalcTry
//
//  Created by Serge Sychov on 07.01.14.
//  Copyright (c) 2014 Sergey Sychov. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ACalcBrain : NSObject
-(void) pushOperand:(id) operand; //think it's neded to be argu stack
-(double) performOperationInArgu:(id)operation;
-(void) applyArgu; //and may be this is need to be hiden
-(void) pushArguForPerCent; //especialy for perCent function, inserts arg for percent before % operand
-(double) checkMinusOrDivideOperationOnDubble:(NSString*)operand;
-(BOOL) deleteLastElement;


-(void) getResultAndPutAsArguByPriotiy:(int)priority; //may be its need to be hiden???
-(double) count;
-(double) perfomOperation:(NSString *) operation;
-(void) insertBracket: (BOOL) isRigthOpen;
-(void) clearOperation;
-(void) clearArgu;
-(void) checkToExceptDoubleOperation;
//-(NSString *) stringInBrain;
-(NSAttributedString*) stringInBrainWithAtributes:(NSDictionary*)attributes;
-(void) setVariableValue:(NSArray *)values atKey:(NSArray *)keys;
//function to save
-(NSArray*) arrayToSaveBrain;

//program is alweys guaranty to be a Property list
@property (readonly) id program;
@property (readonly) id argu;
@property (readonly) id wholeProgram;
@property (nonatomic) BOOL isStronglyArgu; //the argument is strongly setted by use
@property(readonly) id deepProgram;
@property (readonly) id deepArgu;
@property (readonly) BOOL isOpenBracets;
@property (readonly) int openBracets;


+(double)runProgram:(id) program;
+(double)runProgram:(id)program usingVariableValue: (NSDictionary *) variableValues;
//+(NSString *)descriptionOfProgram:(id)program;
+(NSAttributedString*) descriptionOfProgram:(id)program withAttributes:(NSDictionary*)atributes;
+(id) deepArrayCopy:(NSArray*) arrayToCopy;

+(ACalcBrain*) brainFromSavedArray:(NSArray*)array;
+(ACalcBrain*) initWithProgram:(NSArray*)program withArgu:(NSArray*)argu;
+(ACalcBrain*) initWithProgram:(NSArray*)program withArgu:(NSArray*)argu withOpenBracets:(int)openBracets andIsStrongluArgu:(BOOL)isStronglyArgu;

@end
