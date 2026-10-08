// /Script/DragonIKPlugin.AnimNode_DragonSpineSolver
// size 0x9D0, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/AnimNode_DragonSpineSolver.h

USTRUCT()
struct FAnimNode_DragonSpineSolver : public FAnimNode_Base
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDragonData_MultiInput dragon_input_data;  // 0x0010, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Precision;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaximumPitch;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinimumPitch;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaximumRoll;  // 0x00AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinimumRoll;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxIterations;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FComponentSpacePoseLink ComponentPose;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Alpha;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Shift_Speed;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETraceTypeQuery> Trace_Channel;  // 0x00DC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETraceTypeQuery> Anti_Trace_Channel;  // 0x00DD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIKTrace_Type_Plugin trace_type;  // 0x00DE, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Trace_Radius;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Override_Curve_Velocity;  // 0x00E4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float custom_velocity;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LODThreshold;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Rotate_Around_Translate;  // 0x00F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESolverComplexityPluginEnum complexity_type;  // 0x00F1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Ignore_Lerping;  // 0x00F2, size 0x1
    UPROPERTY(Transient) float ActualAlpha;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float virtual_scale;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float line_trace_downward_height;  // 0x010C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float line_trace_upper_height;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Use_Anti_Channel;  // 0x0114, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool stabilize_pelvis_legs;  // 0x0128, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Pelvis_UpSlopeStabilization_Alpha;  // 0x012C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Pelvis_DownSlopeStabilization_Alpha;  // 0x0130, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool stabilize_chest_legs;  // 0x0134, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Chest_UpSlopeStabilization_Alpha;  // 0x0138, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Chest_DownslopeStabilization_Alpha;  // 0x013C, size 0x4
    UPROPERTY(EditAnywhere) FBoneReference Stabilization_Head_Bone;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference Stabilization_Tail_Bone;  // 0x0150, size 0x10
    UPROPERTY(EditAnywhere) bool Use_Ducking_Feature;  // 0x0160, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETraceTypeQuery> Ducking_Trace_Channel;  // 0x0161, size 0x1
    UPROPERTY(EditAnywhere) float Ducking_Limit;  // 0x0164, size 0x4
    UPROPERTY(EditAnywhere) float Pelvis_Crouch_Height;  // 0x0168, size 0x4
    UPROPERTY(EditAnywhere) float Pelvis_Crouch_Rotation_Intensity;  // 0x016C, size 0x4
    UPROPERTY(EditAnywhere) FVector Duck_Pelvis_Trace_Offset;  // 0x0170, size 0xC
    UPROPERTY(EditAnywhere) float Chest_Crouch_Height;  // 0x017C, size 0x4
    UPROPERTY(EditAnywhere) float Chest_Crouch_Rotation_Intensity;  // 0x0180, size 0x4
    UPROPERTY(EditAnywhere) FVector Duck_Chest_Trace_Offset;  // 0x0184, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Slanted_Height_Up_Offset;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Slanted_Height_Down_Offset;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float dip_multiplier;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float pelvis_adaptive_gravity;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool reverse_fabrik;  // 0x02E4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Calculation_To_RefPose;  // 0x02EC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Chest_Slanted_Height_Up_Offset;  // 0x02F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Chest_Slanted_Height_Down_Offset;  // 0x02F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float chest_side_dip_multiplier;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float chest_adaptive_gravity;  // 0x02FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Chest_Base_Offset;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Pelvis_Base_Offset;  // 0x0304, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float virtual_leg_width;  // 0x0308, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Maximum_Dip_Height;  // 0x030C, size 0x4
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve Pelvis_Height_Multiplier_Curve;  // 0x0318, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Maximum_Dip_Height_Chest;  // 0x03A0, size 0x4
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve Chest_Height_Multiplier_Curve;  // 0x03A8, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float rotation_power_between;  // 0x043C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Use_Automatic_Fabrik_Selection;  // 0x0440, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Trace_Lerp_Speed;  // 0x0444, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Location_Lerp_Speed;  // 0x0448, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Rotation_Lerp_Speed;  // 0x045C, size 0x4
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve Interpolation_Multiplier_Curve;  // 0x0468, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Chest_Influence_Alpha;  // 0x04F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Pelvis_ForwardRotation_Intensity;  // 0x04F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Pelvis_UpwardForwardRotation_Intensity;  // 0x04F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Body_Rotation_Intensity;  // 0x04FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Pelvis_Rotation_Offset;  // 0x0500, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Chest_ForwardRotation_Intensity;  // 0x0504, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Chest_UpwardForwardRotation_Intensity;  // 0x0508, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Chest_SidewardRotation_Intensity;  // 0x050C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Chest_Rotation_Offset;  // 0x0510, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Full_Extended_Spine;  // 0x0550, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float max_extension_ratio;  // 0x0554, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float min_extension_ratio;  // 0x0558, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float extension_switch_speed;  // 0x055C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Enable_Solver;  // 0x0564, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Work_Outside_PIE;  // 0x0565, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Use_Fake_Chest_Rotations;  // 0x0566, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Use_Fake_Pelvis_Rotations;  // 0x0567, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Force_Activation;  // 0x056C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool accurate_feet_placement;  // 0x056D, size 0x1
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve Accurate_Foot_Curve;  // 0x0570, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool use_crosshair_trace_also_for_fail_distance;  // 0x05F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Only_Root_Solve;  // 0x05F9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Ignore_Chest_Solve;  // 0x05FA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Overall_PostSolved_Offset;  // 0x0604, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector character_direction_vector_CS;  // 0x0610, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Forward_Direction_Vector;  // 0x061C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool flip_forward_and_right;  // 0x0628, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERefPosePluginEnum SolverReferencePose;  // 0x0638, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Spine_Feet_Connect;  // 0x0639, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Snake_Joint_Speed;  // 0x0944, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Enable_Snake_Interpolation;  // 0x0948, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool is_snake;  // 0x0949, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Ignore_End_Points;  // 0x094A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Maximum_Feet_Distance;  // 0x094C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Minimum_Feet_Distance;  // 0x0950, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DisplayLineTrace;  // 0x0954, size 0x1

    // Not reflected:
    FDragonData_BoneStruct dragon_bone_data;  // 0x0030
    float Adaptive_Alpha;  // 0x00CC
    FInputScaleBias AlphaScaleBias;  // 0x00D4
    int32 test_counter;  // 0x00F4
    int32 trace_draw_counter;  // 0x00F8
    int32 Num_Valid_Spines;  // 0x0100
    float component_scale;  // 0x0104
    float pelvis_slope_direction;  // 0x0118
    float chest_slope_direction;  // 0x011C
    float pelvis_slope_stab_alpha;  // 0x0120
    float chest_slope_stab_alpha;  // 0x0124
    FHitResult Duck_Pelvis_Hit;  // 0x0190
    FVector Duck_Pelvis_Point;  // 0x0218
    FVector Duck_Pelvis_Highest_Point;  // 0x0224
    FHitResult Duck_Chest_Hit;  // 0x0230
    FVector Duck_Chest_Point;  // 0x02B8
    FVector Duck_Chest_Highest_Point;  // 0x02C4
    float Slope_Detection_Strength;  // 0x02D4
    float upward_push_side_rotation;  // 0x02E8
    float Maximum_Formated_Dip_Height;  // 0x0310
    float Maximum_Formated_Dip_Height_Chest;  // 0x03A4
    float Pelvis_Slope_Detection_Strength;  // 0x0430
    float Chest_Slope_Detection_Strength;  // 0x0434
    float extra_forward_trace_Offset;  // 0x0438
    bool initialize_anim_array;  // 0x0441
    float Formatted_Location_Lerp;  // 0x044C
    float Formatted_Trace_Lerp;  // 0x0450
    float Formatted_Snake_Lerp;  // 0x0454
    float Formatted_Shift_Speed;  // 0x0458
    float Formatted_Rotation_Lerp;  // 0x0460
    bool atleast_one_hit;  // 0x0514
    bool feet_is_empty;  // 0x0515
    FTransform DebugEffectorTransform;  // 0x0520
    float Max_Range_Limit_Lerp;  // 0x0560
    float True_Rotation_Alpha;  // 0x0568
    float Smooth_Factor;  // 0x05FC
    bool every_foot_dont_have_child;  // 0x0600
    FVector root_location_saved;  // 0x062C
    bool Is_ChainOrder_Calculated;  // 0x063A
    FBoneContainer * SavedBoneContainer;  // 0x0640
    float Root_Roll_Value;  // 0x0648
    float Root_Pitch_Value;  // 0x064C
    float[6] diff_heights;  // 0x0650
    TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32> > spine_Feet_pair;  // 0x0668
    TArray<FHitResult,TSizedDefaultAllocator<32> > spine_hit_between;  // 0x0678
    TArray<FVector,TSizedDefaultAllocator<32> > spine_between_points;  // 0x0688
    TArray<FName,TSizedDefaultAllocator<32> > Total_spine_bones;  // 0x0698
    TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32> > spine_hit_pairs;  // 0x06A8
    TArray<FHitResult,TSizedDefaultAllocator<32> > spine_hit_edges;  // 0x06B8
    TArray<FVector,TSizedDefaultAllocator<32> > spine_vectors_between;  // 0x06C8
    TArray<FVector,TSizedDefaultAllocator<32> > Full_Spine_OriginalLocations;  // 0x06D8
    TArray<float,TSizedDefaultAllocator<32> > Full_Spine_Heights;  // 0x06E8
    TArray<float,TSizedDefaultAllocator<32> > Total_spine_heights;  // 0x06F8
    TArray<float,TSizedDefaultAllocator<32> > Total_spine_alphas;  // 0x0708
    TArray<float,TSizedDefaultAllocator<32> > Total_spine_angles;  // 0x0718
    TArray<FVector,TSizedDefaultAllocator<32> > Total_Terrain_Locations;  // 0x0728
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32> > Spine_Indices;  // 0x0738
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32> > Extra_Spine_Indices;  // 0x0748
    TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32> > spine_Transform_pairs;  // 0x0758
    TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32> > spine_AnimatedTransform_pairs;  // 0x0768
    TArray<FVector,TSizedDefaultAllocator<32> > spine_between_transforms;  // 0x0778
    TArray<FVector,TSizedDefaultAllocator<32> > spine_between_offseted_transforms;  // 0x0788
    TArray<float,TSizedDefaultAllocator<32> > spine_between_heights;  // 0x0798
    TArray<FVector,TSizedDefaultAllocator<32> > snake_spine_positions;  // 0x07A8
    TArray<FTransform,TSizedDefaultAllocator<32> > spine_ChangeTransform_pairs_Obsolete;  // 0x07B8
    TArray<FVector,TSizedDefaultAllocator<32> > spine_LocDifference;  // 0x07C8
    TArray<FRotator,TSizedDefaultAllocator<32> > spine_RotDifference;  // 0x07D8
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > RestBoneTransforms;  // 0x07E8
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > AnimatedBoneTransforms;  // 0x07F8
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > Original_AnimatedBoneTransforms;  // 0x0808
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > FinalBoneTransforms;  // 0x0818
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > BoneTransforms;  // 0x0828
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > LegTransforms;  // 0x0838
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
    bool Use_FeetTips;  // 0x094B
    bool is_single_spine;  // 0x0955
    FComponentSpacePoseContext * saved_pose;  // 0x0958
    USkeletalMeshComponent * owning_skel;  // 0x0960
    float Character_Speed;  // 0x0968
    AActor * Character_Actor;  // 0x0970
    USkeleton * skeleton_ref;  // 0x0978
    FVector Pelvis_Transform_ROP;  // 0x0980
    FVector Chest_Transform_ROP;  // 0x098C
    int32 tot_len_of_bones;  // 0x0998
    bool solve_should_fail;  // 0x099C
    TArray<FColor,TSizedDefaultAllocator<32> > TraceLinearColor;  // 0x09A0
    TArray<FVector,TSizedDefaultAllocator<32> > TraceStartList;  // 0x09B0
    TArray<FVector,TSizedDefaultAllocator<32> > TraceEndList;  // 0x09C0
};
