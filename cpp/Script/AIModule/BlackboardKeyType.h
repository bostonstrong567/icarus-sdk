// /Script/AIModule.BlackboardKeyType
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h

UCLASS(Abstract, EditInlineNew)
class UBlackboardKeyType : public UObject
{
protected:
    uint16 ValueSize;  // 0x0028, not reflected
    TEnumAsByte<enum EBlackboardKeyOperation::Type> SupportedOp;  // 0x002A, not reflected
    uint8 : 1 bCreateKeyInstance;  // 0x002B, not reflected
    uint8 : 1 bIsInstanced;  // 0x002B, not reflected

    // Virtual functions that start here:
    //   Clear, CompareValues, CopyValues, DescribeArithmeticParam, DescribeSelf, DescribeValue, FreeMemory
    //   GetLocation, GetRotation, InitializeMemory, IsAllowedByFilter, IsEmpty, PreInitialize
    //   TestArithmeticOperation, TestBasicOperation, TestTextOperation, UpdateDeprecatedKey
};
