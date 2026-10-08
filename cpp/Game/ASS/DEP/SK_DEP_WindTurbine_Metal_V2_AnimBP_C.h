// /Game/ASS/DEP/SK_DEP_WindTurbine_Metal_V2_AnimBP.SK_DEP_WindTurbine_Metal_V2_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x434, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DEP_WindTurbine_Metal_V2_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x02F8, size 0x108
    UPROPERTY() FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x0400, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Powered;  // 0x0420, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationSpeed;  // 0x0424, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDegreesRotationPerSecond;  // 0x0428, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Yaw;  // 0x042C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Roll;  // 0x0430, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_DEP_WindTurbine_Metal_V2_AnimBP_AnimGraphNode_ModifyBone_9BEC68FC4FB55FF3D6061F87DC058B1E();
    UFUNCTION() void ExecuteUbergraph_SK_DEP_WindTurbine_Metal_V2_AnimBP(int32 EntryPoint);  // parameters 0x4
};
