// /Game/BP/UI/Talents/Base/UMG_TreePoints.UMG_TreePoints_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TreePoints_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* GlowAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Arrow;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Arrow1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Arrow3;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Arrow4;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PointsText;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TextBorder;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor PointsColour;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor TalentsColour;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor OrbitalColour;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor BlueprintColour;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UTalentViewInterface* View;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NewVar_0;  // 0x02E8, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_TreePoints(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnModelStateChanged(UTalentModelInterface_Const* Model);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetView(UTalentViewInterface* InView);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdatePoints(UTalentModelInterface_Const* Model);  // parameters 0x8
};
