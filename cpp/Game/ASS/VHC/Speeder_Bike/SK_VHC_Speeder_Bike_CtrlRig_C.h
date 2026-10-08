// /Game/ASS/VHC/Speeder_Bike/SK_VHC_Speeder_Bike_CtrlRig.SK_VHC_Speeder_Bike_CtrlRig_C
// Derives from: UControlRig > UObject
// size 0x6B0, a blueprint class, rig

UCLASS(EditInlineNew, Config=Engine)
class USK_VHC_Speeder_Bike_CtrlRig_C : public UControlRig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Trace_Offset;  // 0x0650, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Trace_Length;  // 0x0654, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorDistanceFwd;  // 0x0660, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloorDistanceBack;  // 0x0664, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredFloorDistance;  // 0x0668, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaximumFloorHeightDifference;  // 0x066C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DistanceMultiplier;  // 0x0670, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform InterpolatedWorldPosition;  // 0x0680, size 0x30
};
