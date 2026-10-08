// /Game/BP/AI/Bosses/Misc/BP_Mammoth_IceBall_Dummy.BP_Mammoth_IceBall_Dummy_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5B5, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mammoth_IceBall_Dummy_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_ProjectileTrail;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0590, size 0x8
    UPROPERTY() float Timeline_0_ZHeight_5CD0FA7E41A3A25D20E76F8A2FA1389F;  // 0x0598, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_5CD0FA7E41A3A25D20E76F8A2FA1389F;  // 0x059C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x05A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocation;  // 0x05A8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FinishedMoving;  // 0x05B4, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Mammoth_IceBall_Dummy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
};
