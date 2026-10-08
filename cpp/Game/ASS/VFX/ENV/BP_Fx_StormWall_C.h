// /Game/ASS/VFX/ENV/BP_Fx_StormWall.BP_Fx_StormWall_C
// Derives from: AActor > UObject
// size 0x361, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fx_StormWall_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_StormWall_Top_04;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_StormWall_Mid_05;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_StormWall_Mid_04;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_StormWall_Top_03;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_StormWall_Mid_03;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_StormWall_Top_02;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_StormWall_Bot_01;  // 0x0258, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_StormWall_Bot_03;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_StormWall_Bot_02;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_StormWall_Mid_02;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_StormWall_Mid_01;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0288, size 0x8
    UPROPERTY() float StartTopStormTimeline_OpacityBlend_A7AAF1D74737606FF3F58086254A4EF3;  // 0x0290, size 0x4
    UPROPERTY() float StartTopStormTimeline_CloudIntensityBlend_A7AAF1D74737606FF3F58086254A4EF3;  // 0x0294, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> StartTopStormTimeline__Direction_A7AAF1D74737606FF3F58086254A4EF3;  // 0x0298, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* StartTopStormTimeline;  // 0x02A0, size 0x8
    UPROPERTY() float DissipateTopStormTimeline_SpeedChange_536C0C8F42F5E3C9A5E5FCA98C244220;  // 0x02A8, size 0x4
    UPROPERTY() float DissipateTopStormTimeline_OpacityBlend_536C0C8F42F5E3C9A5E5FCA98C244220;  // 0x02AC, size 0x4
    UPROPERTY() float DissipateTopStormTimeline_CloudIntensityBlend_536C0C8F42F5E3C9A5E5FCA98C244220;  // 0x02B0, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> DissipateTopStormTimeline__Direction_536C0C8F42F5E3C9A5E5FCA98C244220;  // 0x02B4, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* DissipateTopStormTimeline;  // 0x02B8, size 0x8
    UPROPERTY() float DissipateMidStormTimeline_SpeedChange_EC98BC484B0105C7B8B3A4BEE6AEF6E9;  // 0x02C0, size 0x4
    UPROPERTY() float DissipateMidStormTimeline_OpacityBlend_EC98BC484B0105C7B8B3A4BEE6AEF6E9;  // 0x02C4, size 0x4
    UPROPERTY() float DissipateMidStormTimeline_Cloud_Intensity_Blend_EC98BC484B0105C7B8B3A4BEE6AEF6E9;  // 0x02C8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> DissipateMidStormTimeline__Direction_EC98BC484B0105C7B8B3A4BEE6AEF6E9;  // 0x02CC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* DissipateMidStormTimeline;  // 0x02D0, size 0x8
    UPROPERTY() float DissipateBottomStormTimeline_OpacityBlend_9E6EDCAA43E1EB0F1DE4358594F7BEC8;  // 0x02D8, size 0x4
    UPROPERTY() float DissipateBottomStormTimeline_Cloud_Intensity_Blend_9E6EDCAA43E1EB0F1DE4358594F7BEC8;  // 0x02DC, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> DissipateBottomStormTimeline__Direction_9E6EDCAA43E1EB0F1DE4358594F7BEC8;  // 0x02E0, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* DissipateBottomStormTimeline;  // 0x02E8, size 0x8
    UPROPERTY() float StartMiddleStormTimeline_OpacityBlend_ECECF38F4838E65A4474218E02A40E6E;  // 0x02F0, size 0x4
    UPROPERTY() float StartMiddleStormTimeline_Cloud_Intensity_Blend_ECECF38F4838E65A4474218E02A40E6E;  // 0x02F4, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> StartMiddleStormTimeline__Direction_ECECF38F4838E65A4474218E02A40E6E;  // 0x02F8, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* StartMiddleStormTimeline;  // 0x0300, size 0x8
    UPROPERTY() float StartBottomStormTimeline_OpacityBlend_E14271574D22D17B0C71FD9EFF61AE70;  // 0x0308, size 0x4
    UPROPERTY() float StartBottomStormTimeline_Cloud_Intensity_Blend_E14271574D22D17B0C71FD9EFF61AE70;  // 0x030C, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> StartBottomStormTimeline__Direction_E14271574D22D17B0C71FD9EFF61AE70;  // 0x0310, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* StartBottomStormTimeline;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UsingDesert;  // 0x0320, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UsingSnow;  // 0x0321, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Emissive_Default;  // 0x0324, size 0x4, named "Emissive Default"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Opacity_Default;  // 0x0328, size 0x4, named "Opacity Default"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> MIStormWallTop;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> MIStormWallMid;  // 0x0340, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> MIStormWallBot;  // 0x0350, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool StormFinish;  // 0x0360, size 0x1

    UFUNCTION(BlueprintCallable) void ActivateWall(bool UseDesert, bool UseSnow);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void BiomeSelect(bool Desert, bool Snow);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void DeactivateWall();
    UFUNCTION() void DissipateBottomStormTimeline__FinishedFunc();
    UFUNCTION() void DissipateBottomStormTimeline__UpdateFunc();
    UFUNCTION() void DissipateMidStormTimeline__FinishedFunc();
    UFUNCTION() void DissipateMidStormTimeline__UpdateFunc();
    UFUNCTION() void DissipateTopStormTimeline__FinishedFunc();
    UFUNCTION() void DissipateTopStormTimeline__UpdateFunc();
    UFUNCTION() void ExecuteUbergraph_BP_Fx_StormWall(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitializeMaterials();
    UFUNCTION(BlueprintCallable) void RandomSpeedPerWall();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION() void StartBottomStormTimeline__FinishedFunc();
    UFUNCTION() void StartBottomStormTimeline__UpdateFunc();
    UFUNCTION() void StartMiddleStormTimeline__FinishedFunc();
    UFUNCTION() void StartMiddleStormTimeline__UpdateFunc();
    UFUNCTION() void StartTopStormTimeline__FinishedFunc();
    UFUNCTION() void StartTopStormTimeline__UpdateFunc();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
