// /Script/ControlRig.AnimNode_ControlRig
// size 0x368, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/AnimNode_ControlRig.h

USTRUCT()
struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
    UPROPERTY(EditAnywhere) TSubclassOf<UControlRig> ControlRigClass;  // 0x0170, size 0x8
    UPROPERTY(Transient) UControlRig* ControlRig;  // 0x0178, size 0x8
    UPROPERTY(EditAnywhere) float Alpha;  // 0x0180, size 0x4
    UPROPERTY(EditAnywhere) EAnimAlphaInputType AlphaInputType;  // 0x0184, size 0x1
    UPROPERTY(EditAnywhere) uint8 bAlphaBoolEnabled : 1;  // 0x0185, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bSetRefPoseFromSkeleton : 1;  // 0x0185, mask 0x02
    UPROPERTY(EditAnywhere) FInputScaleBias AlphaScaleBias;  // 0x0188, size 0x8
    UPROPERTY(EditAnywhere) FInputAlphaBoolBlend AlphaBoolBlend;  // 0x0190, size 0x48
    UPROPERTY(EditAnywhere) FName AlphaCurveName;  // 0x01D8, size 0x8
    UPROPERTY(EditAnywhere) FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x01E0, size 0x30
    UPROPERTY() TMap<FName, FName> InputMapping;  // 0x0210, size 0x50
    UPROPERTY() TMap<FName, FName> OutputMapping;  // 0x0260, size 0x50
    UPROPERTY(EditAnywhere) int32 LODThreshold;  // 0x0360, size 0x4

    // Not reflected:
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > InputTypes;  // 0x02B0
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > OutputTypes;  // 0x0300
    TArray<unsigned char *,TSizedDefaultAllocator<32> > DestParameters;  // 0x0350
};
