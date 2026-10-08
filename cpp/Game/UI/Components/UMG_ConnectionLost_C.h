// /Game/UI/Components/UMG_ConnectionLost.UMG_ConnectionLost_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ConnectionLost_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ConnectionLostAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon_1;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle TimerHandle;  // 0x0280, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ConnectionLost(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateConnectionLost();
};
