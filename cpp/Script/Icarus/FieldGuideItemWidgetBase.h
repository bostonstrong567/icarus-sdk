// /Script/Icarus.FieldGuideItemWidgetBase
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, declared in Icarus/Source/Icarus/FieldGuide/FieldGuideItemWidgetBase.h

UCLASS(EditInlineNew)
class UFieldGuideItemWidgetBase : public UUserWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle ItemRow;  // 0x0260, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFieldGuideCategoriesRowHandle CategoryRow;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFieldGuideSubcategoriesRowHandle SubcategoryRow;  // 0x0290, size 0x18
    UPROPERTY(BlueprintAssignable) FOnCloseEvent OnClosed;  // 0x02A8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnResourceClicked OnResourceClicked;  // 0x02B8, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48

    // Virtual functions that start here:
    //   InitFieldGuideView_Implementation
};
