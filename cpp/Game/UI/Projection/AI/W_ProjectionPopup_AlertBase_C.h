// /Game/UI/Projection/AI/W_ProjectionPopup_AlertBase.W_ProjectionPopup_AlertBase_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x340, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionPopup_AlertBase_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AlertValue;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Cautious;  // 0x02BC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Alert;  // 0x02BD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AlertValueSmoothed;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AlertInterpSpeed;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* ColourCurve;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HealthValue;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HealthValueSmoothed;  // 0x02D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HealthInterpSpeed;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Level;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAICreatureTypeRowHandle Creature_Type;  // 0x02E0, size 0x18, named "Creature Type"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Perception_Enabled;  // 0x02F8, size 0x1, named "Perception Enabled"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle Epic_Creature;  // 0x02FC, size 0x18, named "Epic Creature"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Recently_Perceiving_Any_Player;  // 0x0314, size 0x1, named "Is Recently Perceiving Any Player"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText EpicName;  // 0x0318, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Eating_or_Drinking;  // 0x0330, size 0x1, named "Is Eating or Drinking"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CustomBehaviourState;  // 0x0334, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArmorValue;  // 0x0338, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArmorValueSmoothed;  // 0x033C, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_ProjectionPopup_AlertBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TickAlertVisuals();
    UFUNCTION(BlueprintCallable) void TickArmorVisuals();
    UFUNCTION(BlueprintCallable) void TickHealthVisuals();
    UFUNCTION(BlueprintCallable) void TickWidget();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
