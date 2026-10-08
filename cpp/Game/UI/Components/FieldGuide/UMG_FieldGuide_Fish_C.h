// /Game/UI/Components/FieldGuide/UMG_FieldGuide_Fish.UMG_FieldGuide_Fish_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_Fish_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* Content;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* UMG_IcarusGrid;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFish_Clicked Fish_Clicked;  // 0x0288, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_Fish(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FishClicked(FFishDataRowHandle Creature, bool Discovered);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void Fish_Clicked__DelegateSignature(FFishDataRowHandle Fish);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void LinkedActorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetupObjectInventory(UInventory* ContainerInventory);  // parameters 0x8
};
