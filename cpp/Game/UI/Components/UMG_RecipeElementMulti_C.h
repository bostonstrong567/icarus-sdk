// /Game/UI/Components/UMG_RecipeElementMulti.UMG_RecipeElementMulti_C
// Derives from: UUMG_ListElement_C > UUserWidget > UWidget > UVisual > UObject
// size 0x368, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecipeElementMulti_C : public UUMG_ListElement_C, public IUserListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BackFill;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CornersImage;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* DarkenBorder;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HoverCorners;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LeftFill;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* LeftSide;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* MidImage;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_2;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* RightSide;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDNormalImage;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDHoveredImage;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDPressedImage;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDInvalidNormalImage;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDInvalidHoverImage;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDInvalidPressedImage;  // 0x0360, size 0x8

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_RecipeElementMulti(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UOverlay* GetHoverCornerWidget();  // parameters 0x8
    UFUNCTION(BlueprintCallable) UOverlay* GetOverlay();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FProcessorRecipesRowHandle GetProcessorRecipe();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetResourceIcon(EIcarusResourceType Type, UTexture2D*& Icon);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void InitialiseIcons();
    UFUNCTION(BlueprintCallable) void SetState(bool Valid);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FSlateBrush UpdateRecipeFrame();  // parameters 0x88
};
