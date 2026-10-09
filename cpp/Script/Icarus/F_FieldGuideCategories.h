// /Script/Icarus.FieldGuideCategories
// size 0x98, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/FieldGuideCategoriesLibrary.generated.h

USTRUCT()
struct FFieldGuideCategories : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UFieldGuidePageWidgetBase> IndexView;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UFieldGuidePageWidgetBase> DetailView;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DisplayOrder;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> DisplayIcon;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFieldGuideSubcategoriesRowHandle> Subcategories;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle TagQuery;  // 0x0080, size 0x18
};
