// /Script/Engine.UserDefinedStruct
// Derives from: UScriptStruct > UStruct > UField > UObject
// size 0x108, declared in Engine/Source/Runtime/Engine/Classes/Engine/UserDefinedStruct.h

UCLASS()
class UUserDefinedStruct : public UScriptStruct
{
public:
    UPROPERTY() TEnumAsByte<EUserDefinedStructureStatus> Status;  // 0x00C0, size 0x1
    UPROPERTY() FGuid Guid;  // 0x00C4, size 0x10
protected:
    FUserStructOnScopeIgnoreDefaults DefaultStructInstance;  // 0x00D8, not reflected
    bool bIgnoreStructDefaults;  // 0x0100, not reflected
};
