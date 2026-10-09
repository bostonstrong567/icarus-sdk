// /Script/Engine.EdGraphNode
// Derives from: UObject
// size 0x98, declared in Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraphNode.h

UCLASS()
class UEdGraphNode : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    TArray<UEdGraphPin *,TSizedDefaultAllocator<32> > Pins;  // 0x0028, not reflected
    UPROPERTY() TArray<UEdGraphPin_Deprecated*> DeprecatedPins;  // 0x0038, size 0x10
    UPROPERTY() int32 NodePosX;  // 0x0048, size 0x4
    UPROPERTY() int32 NodePosY;  // 0x004C, size 0x4
    UPROPERTY() int32 NodeWidth;  // 0x0050, size 0x4
    UPROPERTY() int32 NodeHeight;  // 0x0054, size 0x4
    UPROPERTY() TEnumAsByte<ENodeAdvancedPins> AdvancedPinDisplay;  // 0x0058, size 0x1
    uint8 : 1 bDisableOrphanPinSaving;  // 0x005B, not reflected
    UPROPERTY() uint8 bHasCompilerMessage : 1;  // 0x005B, mask 0x40
    UPROPERTY() FString NodeComment;  // 0x0060, size 0x10
    UPROPERTY() int32 ErrorType;  // 0x0070, size 0x4
    UPROPERTY() FString ErrorMsg;  // 0x0078, size 0x10
    UPROPERTY() FGuid NodeGuid;  // 0x0088, size 0x10
protected:
    ESaveOrphanPinMode OrphanedPinSaveMode;  // 0x005A, not reflected
    uint8 : 1 bAllowSplitPins_DEPRECATED;  // 0x005B, not reflected
private:
    UPROPERTY() ENodeEnabledState EnabledState;  // 0x0059, size 0x1
    uint8 : 1 bIsIntermediateNode;  // 0x005B, not reflected
    UPROPERTY() uint8 bDisplayAsDisabled : 1;  // 0x005B, mask 0x02
    UPROPERTY() uint8 bUserSetEnabledState : 1;  // 0x005B, mask 0x04
    UPROPERTY(Deprecated) uint8 bIsNodeEnabled : 1;  // 0x005B, mask 0x10

    // Virtual functions that start here:
    //   GetCanRenameNode, IsInDevelopmentMode
};
