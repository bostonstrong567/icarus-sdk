// /Game/BP/Objects/World/Items/Deployables/Prop/BP_Prop_Camera.BP_Prop_Camera_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x748, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Prop_Camera_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DeployableSM1;  // 0x0730, size 0x8
    UPROPERTY() float CameraMovement_NewTrack_0_7D380A1541038BB3B61B2BB11EC92ED9;  // 0x0738, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> CameraMovement__Direction_7D380A1541038BB3B61B2BB11EC92ED9;  // 0x073C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* CameraMovement;  // 0x0740, size 0x8

    UFUNCTION() void CameraMovement__FinishedFunc();
    UFUNCTION() void CameraMovement__UpdateFunc();
    UFUNCTION() void ExecuteUbergraph_BP_Prop_Camera(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
};
