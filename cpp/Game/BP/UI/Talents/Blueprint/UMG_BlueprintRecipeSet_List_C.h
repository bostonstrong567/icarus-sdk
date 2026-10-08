// /Game/BP/UI/Talents/Blueprint/UMG_BlueprintRecipeSet_List.UMG_BlueprintRecipeSet_List_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BlueprintRecipeSet_List_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGridPanel* RequiredElementsBox;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* ScrollBox_0;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<FRecipeSetsRowHandle> GroupCraftedSets;  // 0x0278, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Speed;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DirectionDown;  // 0x02CC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Amount;  // 0x02D0, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_BlueprintRecipeSet_List(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Setup(FTalentsRowHandle Talent);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
