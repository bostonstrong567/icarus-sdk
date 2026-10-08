// /Game/ASS/ITM/SK_ITM_Cart_Wood_CtrlRig.SK_ITM_Cart_Wood_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x70C, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_ITM_Cart_Wood_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform PivotTransform;  // 0x0650, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform InterpolatedTransform;  // 0x0680, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform DesiredWorldTransform;  // 0x06B0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorDistanceR;  // 0x06E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorDistanceL;  // 0x06E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Trace_Offset;  // 0x06E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Length;  // 0x06EC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HeightLerp_Speed_Inc;  // 0x06F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HeightLerp_Speed_Dec;  // 0x06FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredYaw;  // 0x0700, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredPitch;  // 0x0704, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredRoll;  // 0x0708, size 0x4
};
