// /Game/UI/Components/UMG_IcarusGrid.UMG_IcarusGrid_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_IcarusGrid_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* Grid;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 HorizontalSlots;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SlotCount;  // 0x026C, size 0x4

    UFUNCTION(BlueprintCallable) void Add_Widget(UUserWidget* Widget);  // parameters 0x8, named "Add Widget"
    UFUNCTION(BlueprintCallable) void Clear();
    UFUNCTION(BlueprintCallable) TArray<UWidget*> GetAllChildren();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Refresh();
};
