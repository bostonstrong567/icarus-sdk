// /Script/Engine.Breakpoint
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Engine/Breakpoint.h

UCLASS()
class UBreakpoint : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Transient) uint8 bEnabled : 1;  // 0x0028, mask 0x01
    UPROPERTY() UEdGraphNode* Node;  // 0x0030, size 0x8
    UPROPERTY() uint8 bStepOnce : 1;  // 0x0038, mask 0x01
    UPROPERTY() uint8 bStepOnce_WasPreviouslyDisabled : 1;  // 0x0038, mask 0x02
    UPROPERTY() uint8 bStepOnce_RemoveAfterHit : 1;  // 0x0038, mask 0x04
};
