// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Fishing_Rod_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCableComponent* FishingLine;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* Lure;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* CastAudio;  // 0x0598, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* LureAttach;  // 0x05A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* AttachPoint;  // 0x05A8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Reeling;  // 0x05B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsFishOnLine;  // 0x05B1, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool FullyCasted;  // 0x05B2, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FItemData FishItemData;  // 0x05B8, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CastLength;  // 0x07A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VerticalReelSpeed;  // 0x07AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HorizontalReelSpeed;  // 0x07B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxCastLength;  // 0x07B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinLureDistance;  // 0x07B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxLureDistance;  // 0x07BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Fishing_Rod_Lure_C* LureActor;  // 0x07C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WasCastIntoWater;  // 0x07C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFishAdded FishAdded;  // 0x07D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PickupDistance;  // 0x07E0, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_UserInterface_C* UserInterface;  // 0x07E8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* ThrashingVFX;  // 0x07F0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void DoesHaveLure(bool& HasLure, FItemData& CurrentLure);  // parameters 0x1F8
    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Fishing_Rod(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FishAdded__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLure(ABP_Fishing_Rod_Lure_C*& Lure);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GivePlayerFish();
    UFUNCTION(BlueprintCallable) void Is_Lure_Overlapping_Water(bool& IsFloating);  // parameters 0x1, named "Is Lure Overlapping Water"
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsCasted(bool& Casted);  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool IsLureTooClose();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool IsLureTooFar();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LaunchLure(FVector Velocity);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void LureCollide();
    UFUNCTION(BlueprintCallable) void LureOverlap();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_OnBobLure();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_OnCasted();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_OnLanded();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_OnReset(bool WasPreviouslyCasted);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_FishItemData();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResetLure();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_BobLure();
    UFUNCTION(BlueprintCallable) void SetNSRotation();
};
