// /Script/Icarus.KeyRebindableWidget
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x268, declared in Icarus/Source/Icarus/UI/Settings/KeyRebindableWidget.h

UCLASS(EditInlineNew)
class UKeyRebindableWidget : public UUserWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(BlueprintReadWrite) bool bListening;  // 0x0260, size 0x1
public:
    UFUNCTION(BlueprintImplementableEvent) void OnEndRebind();
    UFUNCTION(BlueprintImplementableEvent) bool OnKeySet(FKey NewKey);  // parameters 0x19
    UFUNCTION(BlueprintImplementableEvent) void OnStartRebind();
};
