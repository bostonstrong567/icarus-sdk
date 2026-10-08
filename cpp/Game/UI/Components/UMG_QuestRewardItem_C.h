// /Game/UI/Components/UMG_QuestRewardItem.UMG_QuestRewardItem_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_QuestRewardItem_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AmountText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BonusIcon;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemImage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Selectable;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRewardItemEntry ItemReward;  // 0x0288, size 0x24
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Multipler;  // 0x02AC, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_QuestRewardItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
