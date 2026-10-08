// /Script/AIModule.BlackboardKeyType
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h

UCLASS(Abstract, EditInlineNew)
class UBlackboardKeyType : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    uint16 ValueSize;  // 0x0028, protected
    TEnumAsByte<enum EBlackboardKeyOperation::Type> SupportedOp;  // 0x002A, protected
    uint8 : 1 bIsInstanced;  // 0x002B, protected
    uint8 : 1 bCreateKeyInstance;  // 0x002B, protected

    // Virtual functions that start here:
    //   Clear, CompareValues, CopyValues, DescribeArithmeticParam, DescribeSelf, DescribeValue, FreeMemory
    //   GetLocation, GetRotation, InitializeMemory, IsAllowedByFilter, IsEmpty, PreInitialize
    //   TestArithmeticOperation, TestBasicOperation, TestTextOperation, UpdateDeprecatedKey
};
