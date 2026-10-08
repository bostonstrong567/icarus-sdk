// /Script/DragonIKPlugin.AnimNode_DragonWarpSolver
// size 0x550, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/AnimNode_DragonWarpSolver.h

USTRUCT()
struct FAnimNode_DragonWarpSolver : public FAnimNode_DragonControlBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDragonData_WarpLimbsData> dragon_limb_input;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Hip_Bone_Name;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool enable_solver;  // 0x0124, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector character_direction_vector_CS;  // 0x0244, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector forward_vector_CS;  // 0x0250, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float speed_warping_const;  // 0x025C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool enable_slope_warp;  // 0x0260, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float automatic_speed_warping_const;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float slope_detection_tolerance;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Warp_Slope_Interpolation;  // 0x026C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETraceTypeQuery> Trace_Channel;  // 0x02A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float line_trace_downward_height;  // 0x02A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float line_trace_upper_height;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float virtual_leg_width;  // 0x02AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float virtual_scale;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DisplayLineTrace;  // 0x02B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Limb_Compression_Intensity;  // 0x02BC, size 0x4
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve Limb_Lifting_Curve;  // 0x02C0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Hip_Change_Intensity;  // 0x0348, size 0x4
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve Hip_Lifting_Curve;  // 0x0350, size 0x88

    // Not reflected:
    FBoneReference Hip_Bone_Ref;  // 0x00E0
    float Hip_Offset;  // 0x00F0
    TArray<FDragonData_WarpLimbStruct,TSizedDefaultAllocator<32> > dragon_limb_data;  // 0x00F8
    TArray<FVector,TSizedDefaultAllocator<32> > original_foot_array;  // 0x0108
    int32 test_counter;  // 0x0118
    int32 trace_draw_counter;  // 0x011C
    float scale_mode;  // 0x0120
    FBoneContainer * SavedBoneContainer;  // 0x0128
    FTransform ChestEffectorTransform;  // 0x0130
    FTransform RootEffectorTransform;  // 0x0160
    TArray<FBoneReference,TSizedDefaultAllocator<32> > feet_bone_array;  // 0x0190
    TArray<FTransform,TSizedDefaultAllocator<32> > feet_transform_array;  // 0x01A0
    TArray<float,TSizedDefaultAllocator<32> > feet_Alpha_array;  // 0x01B0
    TArray<FTransform,TSizedDefaultAllocator<32> > feet_mod_transform_array;  // 0x01C0
    TArray<TArray<TArray<FTransform,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > feet_fingers_transform_array;  // 0x01D0
    TArray<TArray<FVector,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > feet_knee_offset_array;  // 0x01E0
    TArray<TArray<FTransform,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > feet_Animated_transform_array;  // 0x01F0
    TArray<FTransform,TSizedDefaultAllocator<32> > knee_Animated_transform_array;  // 0x0200
    bool atleast_one_hit;  // 0x0210
    TArray<FHitResult,TSizedDefaultAllocator<32> > feet_hit_array;  // 0x0218
    bool solve_should_fail;  // 0x0228
    TArray<FName,TSizedDefaultAllocator<32> > Total_spine_bones;  // 0x0230
    bool every_foot_dont_have_child;  // 0x0240
    bool is_initialized;  // 0x0241
    FTransform Hip_Transform_Value;  // 0x0270
    float internal_slope_diff;  // 0x02B4
    FHitResult front_hit_result;  // 0x03D8
    FHitResult back_hit_result;  // 0x0460
    TArray<FVector,TSizedDefaultAllocator<32> > EffectorLocationList;  // 0x04E8
    TArray<float,TSizedDefaultAllocator<32> > Total_spine_heights;  // 0x04F8
    TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32> > spine_hit_pairs;  // 0x0508
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32> > Spine_Indices;  // 0x0518
    USkeletalMeshComponent * owning_skel;  // 0x0528
    TArray<FVector,TSizedDefaultAllocator<32> > TraceStartList;  // 0x0530
    TArray<FVector,TSizedDefaultAllocator<32> > TraceEndList;  // 0x0540
};
