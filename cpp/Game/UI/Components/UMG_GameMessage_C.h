// /Game/UI/Components/UMG_GameMessage.UMG_GameMessage_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2BC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GameMessage_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Blink;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BGFill;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Border;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MessageText;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* WarningBorder;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsError;  // 0x0298, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Message;  // 0x02A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MessageLifespan;  // 0x02B8, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_GameMessage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveMessage();
};
