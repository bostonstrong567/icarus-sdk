// /Game/UI/Debug/UMG_InspectionToolPopup.UMG_InspectionToolPopup_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3AC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InspectionToolPopup_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeOut;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_ACTOR;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_BONE;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_COMP;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_MAT;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_MESH;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_PHYS;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StatList;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StatsTitle;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* Switcher;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TagList;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TagsTitle;  // 0x02C8, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_Bone;  // 0x02D0, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_Component;  // 0x02D8, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_Dist;  // 0x02E0, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_HitActor;  // 0x02E8, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_HitActor_1;  // 0x02F0, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_ImpactPoint;  // 0x02F8, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_Mesh;  // 0x0300, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_PhysMat;  // 0x0308, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_Vis;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPrimitiveComponent* HitComponent;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HoldWidget;  // 0x0320, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EDevToolMode> Mode;  // 0x0321, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult HitResult;  // 0x0324, size 0x88

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_InspectionToolPopup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetBone();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetComponent();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetDist();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetHitActor();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetImpactPoint();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetMat();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetMesh();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetPhysMat();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetStats();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetTags();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetVisibilityInfo();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetWorldScale(USceneComponent* Actor, FText& XYZ);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void Initialise(bool HoldWidget, TEnumAsByte<EDevToolMode> Mode, FHitResult HitResult);  // parameters 0x8C
    UFUNCTION(BlueprintCallable) void PlayFadeOut();
};
