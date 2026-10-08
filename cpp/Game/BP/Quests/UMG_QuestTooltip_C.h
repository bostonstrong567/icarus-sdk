// /Game/BP/Quests/UMG_QuestTooltip.UMG_QuestTooltip_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_QuestTooltip_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NameBorder;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* QuestDescription;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* Spacer_395;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* QuestRef;  // 0x0280, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_QuestDescription();  // parameters 0x18
};
