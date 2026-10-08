// /Script/DragonIKPlugin.AnimNode_DragonFeetSolver
// size 0x750, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/AnimNode_DragonFeetSolver.h

USTRUCT()
struct FAnimNode_DragonFeetSolver : public FAnimNode_DragonControlBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDragonData_MultiInput dragon_input_data;  // 0x00C8, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIK_Type_Plugin ik_type;  // 0x0160, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIKTrace_Type_Plugin trace_type;  // 0x0161, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Trace_Radius;  // 0x0164, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Override_Curve_Velocity;  // 0x0168, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float custom_velocity;  // 0x016C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EInterpoLocation_Type_Plugin loc_interp_type;  // 0x0170, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EInterpoRotation_Type_Plugin rot_interp_type;  // 0x0178, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float virtual_scale;  // 0x017C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool automatic_leg_make;  // 0x0180, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Use_OptionalRef_Feet_As_Ref;  // 0x0181, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool enable_solver;  // 0x0182, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Work_Outside_PIE;  // 0x0183, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FComponentSpacePoseLink OptionalRefPose;  // 0x0188, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool interpolate_only_z;  // 0x0198, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float shift_speed;  // 0x019C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Location_Lerp_Speed;  // 0x01A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float feet_rotation_speed;  // 0x01AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ignore_shift_speed;  // 0x01B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Ignore_Lerping;  // 0x01B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Ignore_Location_Lerping;  // 0x01B2, size 0x1
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve Interpolation_Velocity_Curve;  // 0x01B8, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Enable_Complex_Rotation_Method;  // 0x0240, size 0x1
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve ComplexSimpleFoot_Velocity_Curve;  // 0x0248, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETraceTypeQuery> Trace_Channel;  // 0x0310, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETraceTypeQuery> Anti_Trace_Channel;  // 0x0311, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FPS_Lerp_Treshold;  // 0x0314, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float line_trace_upper_height;  // 0x0484, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float line_trace_down_height;  // 0x0488, size 0x4
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve Trace_Down_Multiplier_Curve;  // 0x0490, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Use_Anti_Channel;  // 0x0518, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Should_Rotate_Feet;  // 0x0519, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool show_trace_in_game;  // 0x051B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Enable_Pitch;  // 0x0538, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Enable_Roll;  // 0x0539, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector character_direction_vector_CS;  // 0x053C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector character_forward_direction_vector_CS;  // 0x0548, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector poles_forward_direction_vector_CS;  // 0x0554, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Use_Four_Point_Feets;  // 0x0560, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Enable_Foot_Lift_Limit;  // 0x0561, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Affect_Toes_Always;  // 0x0562, size 0x1
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve Finger_Alpha_Velocity_Curve;  // 0x0568, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Max_Limb_Radius;  // 0x05F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool sticky_feet_mode;  // 0x05F4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float sticky_feet_on_speed;  // 0x05F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float sticky_feet_off_speed;  // 0x05FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Sticky_Feet_Range;  // 0x0600, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDragonData_StickyFeetStruct sticky_feets_data;  // 0x0608, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool sticky_floor_detection;  // 0x0618, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float floor_value;  // 0x061C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Auto_Sticky_Toggle;  // 0x0620, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDragonData_StickySocketStruct sticky_sockets_data;  // 0x0628, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Foot_01_Height_Offset;  // 0x0740, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Foot_02_Height_Offset;  // 0x0744, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Foot_03_Height_Offset;  // 0x0748, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Foot_04_Height_Offset;  // 0x074C, size 0x4

    // Not reflected:
    FDragonData_BoneStruct dragon_bone_data;  // 0x00E8
    int32 test_counter;  // 0x0158
    int32 trace_draw_counter;  // 0x015C
    float scale_mode;  // 0x0174
    float Delta_Loc_Speed;  // 0x01A0
    float Delta_Rot_Speed;  // 0x01A4
    TArray<FVector,TSizedDefaultAllocator<32> > TraceStartList;  // 0x02D0
    TArray<FVector,TSizedDefaultAllocator<32> > TraceEndList;  // 0x02E0
    TArray<bool,TSizedDefaultAllocator<32> > Is_Line_Mode;  // 0x02F0
    TArray<float,TSizedDefaultAllocator<32> > TraceRadiusList;  // 0x0300
    float current_fps;  // 0x0318
    FBoneContainer * SavedBoneContainer;  // 0x0320
    FTransform ChestEffectorTransform;  // 0x0330
    FTransform RootEffectorTransform;  // 0x0360
    TArray<FBoneReference,TSizedDefaultAllocator<32> > feet_bone_array;  // 0x0390
    TArray<FTransform,TSizedDefaultAllocator<32> > feet_transform_array;  // 0x03A0
    TArray<TArray<float,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > feet_Alpha_array;  // 0x03B0
    TArray<TArray<FTransform,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > feet_mod_transform_array;  // 0x03C0
    TArray<TArray<FVector,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > feet_modified_normals;  // 0x03D0
    TArray<TArray<bool,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > feet_ishit_array;  // 0x03E0
    TArray<TArray<FVector,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > feet_impactpoint_array;  // 0x03F0
    TArray<TArray<TArray<FTransform,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > feet_fingers_transform_array;  // 0x0400
    TArray<TArray<FVector,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > feet_knee_offset_array;  // 0x0410
    TArray<TArray<FTransform,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > feet_Animated_transform_array;  // 0x0420
    TArray<FTransform,TSizedDefaultAllocator<32> > knee_Animated_transform_array;  // 0x0430
    bool atleast_one_hit;  // 0x0440
    TArray<FHitResult,TSizedDefaultAllocator<32> > feet_hit_array;  // 0x0448
    bool solve_should_fail;  // 0x0458
    TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32> > spine_Feet_pair;  // 0x0460
    TArray<FName,TSizedDefaultAllocator<32> > Total_spine_bones;  // 0x0470
    bool every_foot_dont_have_child;  // 0x0480
    bool Use_Feet_Tips;  // 0x051A
    bool Automatic_Foot_Height_Detection;  // 0x051C
    float Character_Speed;  // 0x0520
    AActor * Character_Actor;  // 0x0528
    bool is_initialized;  // 0x0530
    bool first_time_setup;  // 0x0531
    int32 first_time_count;  // 0x0534
    TArray<FVector,TSizedDefaultAllocator<32> > EffectorLocationList;  // 0x0638
    TArray<float,TSizedDefaultAllocator<32> > Total_spine_heights;  // 0x0648
    TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32> > spine_hit_pairs;  // 0x0658
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32> > Spine_Indices;  // 0x0668
    TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32> > spine_Transform_pairs;  // 0x0678
    TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32> > spine_AnimatedTransform_pairs;  // 0x0688
    TArray<TArray<FVector,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > FeetTipLocations;  // 0x0698
    TArray<TArray<float,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > FeetWidthSpacing;  // 0x06A8
    TArray<TArray<float,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > FeetRootHeights;  // 0x06B8
    TArray<TArray<TArray<float,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > FeetFingerHeights;  // 0x06C8
    FComponentSpacePoseContext * saved_pose;  // 0x06D8
    USkeletalMeshComponent * owning_skel;  // 0x06E0
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > RestBoneTransforms;  // 0x06E8
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > AnimatedBoneTransforms;  // 0x06F8
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > FinalBoneTransforms;  // 0x0708
    int32 tot_len_of_bones;  // 0x0718
    TArray<FBoneTransform,TSizedDefaultAllocator<32> > BoneTransforms;  // 0x0720
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32> > combined_indices;  // 0x0730
};
