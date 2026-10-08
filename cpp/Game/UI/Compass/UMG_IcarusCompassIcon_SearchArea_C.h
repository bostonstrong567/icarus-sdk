// /Game/UI/Compass/UMG_IcarusCompassIcon_SearchArea.UMG_IcarusCompassIcon_SearchArea_C
// Derives from: UUMG_IcarusCompassIcon_C > UIcarusCompassIcon > UUserWidget > UWidget > UVisual > UObject
// size 0x444, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_IcarusCompassIcon_SearchArea_C : public UUMG_IcarusCompassIcon_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_RadarMainScreen_C* Item;  // 0x0410, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasBeenConstructed;  // 0x0418, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Cached_Search_Area_Color;  // 0x041C, size 0x10, named "Cached Search Area Color"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsWithinSearchArea;  // 0x042C, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* SearchAreaComp;  // 0x0430, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_MapSearchArea_Custom_C* SearchAreaActor;  // 0x0438, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CachedRadius;  // 0x0440, size 0x4

    UFUNCTION(BlueprintCallable) void CheckFadeOutDistance();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_IcarusCompassIcon_SearchArea(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSearchAreaConstructed();
};
