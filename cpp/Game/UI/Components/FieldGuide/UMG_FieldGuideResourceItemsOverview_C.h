// /Game/UI/Components/FieldGuide/UMG_FieldGuideResourceItemsOverview.UMG_FieldGuideResourceItemsOverview_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideResourceItemsOverview_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* Grid;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFieldGuideCategoriesRowHandle CategoryRow;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnResourceClicked OnResourceClicked;  // 0x0288, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideResourceItemsOverview(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnResourceClicked__DelegateSignature(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void Populate_Resource_Detail();  // named "Populate Resource Detail"
    UFUNCTION(BlueprintCallable) void SubItemClicked(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
};
