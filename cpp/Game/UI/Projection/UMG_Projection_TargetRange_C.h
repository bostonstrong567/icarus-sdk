// /Game/UI/Projection/UMG_Projection_TargetRange.UMG_Projection_TargetRange_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x318, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Projection_TargetRange_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Background;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_79;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_1;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_2;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_3;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ObjectivesText;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PlayerName;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Score;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ATargetRangeController* RangeController;  // 0x0310, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_Projection_TargetRange(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetOverridePlacement(FVector2D& Location, float& ScaleAlpha, FVector2D& Alignment, bool& UseOpacity);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldUseOverride();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TickWidget();
    UFUNCTION(BlueprintCallable) void UpdateScore();
    UFUNCTION(BlueprintCallable) void UpdateTime();
};
