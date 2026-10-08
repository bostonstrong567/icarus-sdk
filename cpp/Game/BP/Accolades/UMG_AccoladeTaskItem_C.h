// /Game/BP/Accolades/UMG_AccoladeTaskItem.UMG_AccoladeTaskItem_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AccoladeTaskItem_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TaskNameText;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CheckedOff;  // 0x0270, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor DefaultColour;  // 0x0290, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor CheckedOffColour;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Blue;  // 0x02B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor DefaultColourBlue;  // 0x02B4, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor CheckedOffColourBlue;  // 0x02C4, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_AccoladeTaskItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateState();
};
