// /Script/Icarus.KeyRebindableWidget
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x268, declared in Icarus/Source/Icarus/UI/Settings/KeyRebindableWidget.h

UCLASS(EditInlineNew)
class UKeyRebindableWidget : public UUserWidget
{
public:
    UPROPERTY(BlueprintReadWrite) bool bListening;  // 0x0260, size 0x1

    UFUNCTION(BlueprintImplementableEvent) void OnEndRebind();
    UFUNCTION(BlueprintImplementableEvent) bool OnKeySet(FKey NewKey);  // parameters 0x19
    UFUNCTION(BlueprintImplementableEvent) void OnStartRebind();
};
