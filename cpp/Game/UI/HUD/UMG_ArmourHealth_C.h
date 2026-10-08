// /Game/UI/HUD/UMG_ArmourHealth.UMG_ArmourHealth_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x420, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ArmourHealth_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BrokenFlashing;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ArmourPiece;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush Healthy;  // 0x0278, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush Damaged;  // 0x0300, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush Broken;  // 0x0388, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ArmourDurability;  // 0x0410, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HealthyArmourThreshold;  // 0x0414, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamagedArmourThreshold;  // 0x0418, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrokenArmourThreshold;  // 0x041C, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ArmourHealth(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetArmourHealth(float ArmourDurability);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetArmourVisuals(TEnumAsByte<E_ArmourHealth> ArmourHealth);  // parameters 0x1
};
