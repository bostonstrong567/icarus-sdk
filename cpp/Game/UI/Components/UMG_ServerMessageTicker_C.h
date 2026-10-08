// /Game/UI/Components/UMG_ServerMessageTicker.UMG_ServerMessageTicker_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x268, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ServerMessageTicker_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OutageMessage;  // 0x0260, size 0x8

    UFUNCTION(BlueprintCallable) void Update(FMaintenanceStatus Status);  // parameters 0x20
};
