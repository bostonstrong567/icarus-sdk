// /Script/DragonIKPlugin.AnimNode_DragonAimSolver
// size 0x9A0, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/AnimNode_DragonAimSolver.h

USTRUCT()
struct FAnimNode_DragonAimSolver : public FAnimNode_DragonControlBase
{
    UPROPERTY(EditAnywhere) FBoneReference EndSplineBone;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference StartSplineBone;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform LookAtLocation;  // 0x00F0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDragonData_MultiInput dragon_input_data;  // 0x0120, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDragonData_ArmsData> Aiming_Hand_Limbs;  // 0x01C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDragonData_Overrided_Location_Data Arm_TargetLocation_Overrides;  // 0x01E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Use_Separate_Targets;  // 0x01F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Override_Hand_Rotation;  // 0x01F9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAllowHandStretching;  // 0x01FA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool reach_instead;  // 0x01FB, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Aggregate_Hand_Body;  // 0x01FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Let_Arm_Twist_With_Hand;  // 0x01FD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EPole_System_DragonIK pole_system_input;  // 0x01FE, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ETwist_Type_DragonIK arm_twist_axis;  // 0x01FF, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERotation_Type_DragonIK hand_rotation_method;  // 0x0200, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Override_Head_Rotation;  // 0x0201, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Enable_Hand_Interpolation;  // 0x0202, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Hand_Interpolation_Speed;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDragonData_CustomArmLengths custom_arm_lengths;  // 0x0208, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EInputTransformSpace_DragonIK arm_transform_space;  // 0x0218, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Main_Arm_Index;  // 0x021C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Lookat_Radius;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Inner_Body_Clamp;  // 0x02B4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Lookat_Clamp;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Limbs_Clamp;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Downward_Dip_Multiplier;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Inverted_Dip_Multiplier;  // 0x02CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Vertical_Dip_Treshold;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Side_Move_Multiplier;  // 0x02D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Side_Down_Multiplier;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Up_Rot_Clamp;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Verticle_Range_Angles;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Horizontal_Range_Angles;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve Look_Bending_Curve;  // 0x02F0, size 0x88
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve Look_Multiplier_Curve;  // 0x0378, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EInputTransformSpace_DragonIK look_transform_space;  // 0x0400, size 0x1
    UPROPERTY(EditAnywhere) bool Lock_Legs;  // 0x0401, size 0x1
    UPROPERTY(EditAnywhere) bool ignore_elbow_modification;  // 0x0402, size 0x1
    UPROPERTY(EditAnywhere) bool ignore_separate_hand_solving;  // 0x0403, size 0x1
    UPROPERTY(EditAnywhere) bool Use_Natural_Method;  // 0x0404, size 0x1
    UPROPERTY(EditAnywhere) bool Head_Use_Separate_Clamp;  // 0x0405, size 0x1
    UPROPERTY(EditAnywhere) bool Is_Head_Accurate;  // 0x0406, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool automatic_leg_make;  // 0x0407, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool enable_solver;  // 0x0409, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Work_Outside_PIE;  // 0x040A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Adaptive_Terrain_Tail;  // 0x040B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETraceTypeQuery> Trace_Channel;  // 0x040C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Trace_Up_Height;  // 0x0410, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Trace_Down_Height;  // 0x0414, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EInterpoLocation_Type_Plugin loc_interp_type;  // 0x04A4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Enable_Interpolation;  // 0x04A6, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Interpolation_Speed;  // 0x04A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Toggle_Interpolation_Speed;  // 0x04AC, size 0x4
    UPROPERTY(EditAnywhere) FVector LookAt_Axis;  // 0x0508, size 0xC
    UPROPERTY(EditAnywhere) FVector Upward_Axis;  // 0x0514, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetOffset;  // 0x0520, size 0xC
    UPROPERTY(EditAnywhere) bool Use_Reference_Forward_Axis;  // 0x052C, size 0x1
    UPROPERTY(EditAnywhere) FVector Reference_Constant_Forward_Axis;  // 0x0530, size 0xC
    UPROPERTY(EditAnywhere) FTransform Debug_LookAtLocation;  // 0x0620, size 0x30
    UPROPERTY(EditAnywhere) TArray<FTransform> Debug_Hand_Locations;  // 0x0650, size 0x10

    // Not reflected:
    FDragonData_BoneStruct dragon_bone_data;  // 0x0140
    int32 test_counter;  // 0x01B0
    int32 trace_draw_counter;  // 0x01B4
    int32 Num_Valid_Spines;  // 0x01B8
    float component_scale;  // 0x01BC
    bool atleast_one_hit;  // 0x01C0
    bool feet_is_empty;  // 0x01C1
    TArray<float,TSizedDefaultAllocator<32> > Last_Shoulder_Angles;  // 0x01D8
    bool nsew_pole_method;  // 0x0219
    bool up_arm_twist_technique;  // 0x021A
    FTransform Main_Hand_Default_Transform;  // 0x0220
    FTransform Main_Hand_New_Transform;  // 0x0250
    FTransform Head_Orig_Transform;  // 0x0280
    bool done_leg_make;  // 0x0408
    FHitResult TTS_Aim_Hit;  // 0x0418
    float TTS_Height;  // 0x04A0
    bool is_focus_debugtarget;  // 0x04A5
    float toggle_alpha;  // 0x04B0
    float hand_toggle_alpha;  // 0x04B4
    FVector Lerped_LookatLocation;  // 0x04B8
    TArray<FBoneReference,TSizedDefaultAllocator<32> > Hand_Array;  // 0x04C8
    TArray<FBoneReference,TSizedDefaultAllocator<32> > Elbow_Array;  // 0x04D8
    TArray<FBoneReference,TSizedDefaultAllocator<32> > Shoulder_Array;  // 0x04E8
    TArray<FBoneReference,TSizedDefaultAllocator<32> > Actual_Shoulder_Array;  // 0x04F8
    FVector Reference_Constant_Forward_Temp;  // 0x053C
    FTransform LookAtLocation_Saved;  // 0x0550
    FRotator Limb_Rotation_Offset;  // 0x0580
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > HeadTransforms;  // 0x0590
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > Ref_HeadTransforms;  // 0x05A0
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > LegIK_Transforms;  // 0x05B0
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > HandIK_Transforms;  // 0x05C0
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > Lerp_HandIK_Transforms;  // 0x05D0
    float Max_Range_Limit_Lerp;  // 0x05E0
    TArray<FTransform,TSizedDefaultAllocator<32> > knee_Animated_transform_array;  // 0x05E8
    TArray<FTransform,TSizedDefaultAllocator<32> > Elbow_Bone_Transform_Array;  // 0x05F8
    TArray<FTransform,TSizedDefaultAllocator<32> > Hand_Default_Transform_Array;  // 0x0608
    float Smooth_Factor;  // 0x0618
    bool every_foot_dont_have_child;  // 0x061C
    FBoneContainer * SavedBoneContainer;  // 0x0660
    float Root_Roll_Value;  // 0x0668
    float Root_Pitch_Value;  // 0x066C
    float[6] diff_heights;  // 0x0670
    TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32> > spine_Feet_pair;  // 0x0688
    TArray<FHitResult,TSizedDefaultAllocator<32> > spine_hit_between;  // 0x0698
    TArray<FName,TSizedDefaultAllocator<32> > Total_spine_bones;  // 0x06A8
    TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32> > spine_hit_pairs;  // 0x06B8
    TArray<FHitResult,TSizedDefaultAllocator<32> > spine_hit_edges;  // 0x06C8
    TArray<FVector,TSizedDefaultAllocator<32> > spine_vectors_between;  // 0x06D8
    TArray<FVector,TSizedDefaultAllocator<32> > Full_Spine_OriginalLocations;  // 0x06E8
    TArray<float,TSizedDefaultAllocator<32> > Full_Spine_Heights;  // 0x06F8
    TArray<float,TSizedDefaultAllocator<32> > Total_spine_heights;  // 0x0708
    TArray<float,TSizedDefaultAllocator<32> > Total_spine_alphas;  // 0x0718
    TArray<float,TSizedDefaultAllocator<32> > Total_spine_angles;  // 0x0728
    TArray<FVector,TSizedDefaultAllocator<32> > Total_Terrain_Locations;  // 0x0738
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32> > Spine_Indices;  // 0x0748
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32> > Extra_Spine_Indices;  // 0x0758
    TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32> > spine_Transform_pairs;  // 0x0768
    TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32> > spine_AnimatedTransform_pairs;  // 0x0778
    TArray<FVector,TSizedDefaultAllocator<32> > spine_between_transforms;  // 0x0788
    TArray<FVector,TSizedDefaultAllocator<32> > spine_between_offseted_transforms;  // 0x0798
    TArray<float,TSizedDefaultAllocator<32> > spine_between_heights;  // 0x07A8
    TArray<FVector,TSizedDefaultAllocator<32> > snake_spine_positions;  // 0x07B8
    TArray<FTransform,TSizedDefaultAllocator<32> > spine_ChangeTransform_pairs_Obsolete;  // 0x07C8
    TArray<FVector,TSizedDefaultAllocator<32> > spine_LocDifference;  // 0x07D8
    TArray<FRotator,TSizedDefaultAllocator<32> > spine_RotDifference;  // 0x07E8
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > RestBoneTransforms;  // 0x07F8
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > AnimatedBoneTransforms;  // 0x0808
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > Original_AnimatedBoneTransforms;  // 0x0818
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > FinalBoneTransforms;  // 0x0828
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > BoneTransforms;  // 0x0838
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32> > combined_indices;  // 0x0848
    float midpoint_height;  // 0x0858
    float maximum_spine_length;  // 0x085C
    float angle_data;  // 0x0860
    FTransform ChestEffectorTransform;  // 0x0870
    FTransform RootEffectorTransform;  // 0x08A0
    int32 zero_transform_set;  // 0x08D0
    FTransform Last_RootEffectorTransform;  // 0x08E0
    FTransform Last_ChestEffectorTransform;  // 0x0910
    float spine_median_result;  // 0x0940
    bool Use_FeetTips;  // 0x0944
    FComponentSpacePoseContext * saved_pose;  // 0x0948
    USkeletalMeshComponent * owning_skel;  // 0x0950
    int32 tot_len_of_bones;  // 0x0958
    FRotator HeadRotation_Temp;  // 0x095C
    bool solve_should_fail;  // 0x0968
    TArray<FVector,TSizedDefaultAllocator<32> > TraceStartList;  // 0x0970
    TArray<FVector,TSizedDefaultAllocator<32> > TraceEndList;  // 0x0980
    bool debug_hands_initialized;  // 0x0990
};
