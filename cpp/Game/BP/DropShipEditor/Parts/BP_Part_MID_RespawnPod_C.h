// /Game/BP/DropShipEditor/Parts/BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C
// Derives from: ABP_PartBase_C > AIcarusRocketPart > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x671, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Part_MID_RespawnPod_C : public ABP_PartBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* FIrstPerson;  // 0x05F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x05F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* DropshipSequenceExternal;  // 0x0600, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* DropshipSequenceInternal;  // 0x0608, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess;  // 0x0610, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box;  // 0x0618, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Shuttle_ReEntry_Cone;  // 0x0620, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* LandingFx;  // 0x0628, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0630, size 0x8
    UPROPERTY() float DoorOpenTimeline_OpenValue_1343C0424A9B1AC4701F10A747F03C3D;  // 0x0638, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> DoorOpenTimeline__Direction_1343C0424A9B1AC4701F10A747F03C3D;  // 0x063C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* DoorOpenTimeline;  // 0x0640, size 0x8
    UPROPERTY() float Fade_Fade_5E56498346363A547A1A46B094DCCE99;  // 0x0648, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Fade__Direction_5E56498346363A547A1A46B094DCCE99;  // 0x064C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Fade;  // 0x0650, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Open;  // 0x0658, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ReEntry;  // 0x0659, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Start;  // 0x065A, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Stop;  // 0x065B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DoorOpenValue;  // 0x065C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDoorFinishedOpening DoorFinishedOpening;  // 0x0660, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool SeatUnlocked;  // 0x0670, size 0x1

    UFUNCTION(BlueprintCallable) void DoorFinishedOpening__DelegateSignature();
    UFUNCTION() void DoorOpenTimeline__FinishedFunc();
    UFUNCTION() void DoorOpenTimeline__UpdateFunc();
    UFUNCTION() void ExecuteUbergraph_BP_Part_MID_RespawnPod(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Fade_Cone_FX();
    UFUNCTION() void Fade__FinishedFunc();
    UFUNCTION() void Fade__UpdateFunc();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMesh(UPrimitiveComponent*& Mesh);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Hide_RespawnPod_FX();
    UFUNCTION(BlueprintCallable) void OnRep_Open();
    UFUNCTION(BlueprintCallable) void OnRep_ReEntry();
    UFUNCTION(BlueprintCallable) void OnRep_SeatUnlocked();
    UFUNCTION(BlueprintCallable) void OnRep_Start();
    UFUNCTION(BlueprintCallable) void OnRep_Stop();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Show_RespawnPod_FX();
    UFUNCTION(BlueprintCallable) void StartOpening();
    UFUNCTION(BlueprintCallable) void ToggleFlightSFX(ERocketState DropShipState, bool IsLocalPlayer);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void TriggerEvent(FDropShipActionsEnum Actions);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Update_Fmod_Dropship_State(EDropshipDescentStateFMODParam DropshipSequenceState);  // parameters 0x1, named "Update Fmod Dropship State"
};
