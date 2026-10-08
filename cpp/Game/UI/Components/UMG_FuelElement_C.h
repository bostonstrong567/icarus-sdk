// /Game/UI/Components/UMG_FuelElement.UMG_FuelElement_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x488, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FuelElement_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* IconImage;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSelected Selected;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Item;  // 0x0280, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* NewLinkedActor;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum ResourceType;  // 0x0478, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FuelElement(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Intialise(FItemData NewItem, FIcarusResourcesEnum NewResourceType);  // parameters 0x200
    UFUNCTION(BlueprintCallable) void Selected__DelegateSignature(UUMG_RecipeInputItem_C* SelectedRecipe);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateState(TEnumAsByte<ProcessorPreview> Selected);  // parameters 0x1
};
