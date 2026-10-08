// /Game/BP/Objects/World/Items/Deployables/Missions/BP_ApeOutpostCage2.BP_ApeOutpostCage2_C
// Derives from: ABP_ApeOutpostCage_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ApeOutpostCage2_C : public ABP_ApeOutpostCage_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContext;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_AudioOcclusionComponent_C* BP_AudioOcclusionComponent;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ObjectMesh1;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x03B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* SmallShakeMontage;  // 0x03C0, size 0x8

    UFUNCTION(BlueprintCallable) void BigShake();
    UFUNCTION() void ExecuteUbergraph_BP_ApeOutpostCage2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_BigShakeEffects();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_ShakeEffects();
    UFUNCTION(BlueprintCallable) void OnBlendOut_2BE389F24A1E3AE2B2C30DA788261793(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_F0710CDF45BAA0192DA894925FDEC378(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_2BE389F24A1E3AE2B2C30DA788261793(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_F0710CDF45BAA0192DA894925FDEC378(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_2BE389F24A1E3AE2B2C30DA788261793(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_F0710CDF45BAA0192DA894925FDEC378(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_2BE389F24A1E3AE2B2C30DA788261793(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_F0710CDF45BAA0192DA894925FDEC378(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_2BE389F24A1E3AE2B2C30DA788261793(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_F0710CDF45BAA0192DA894925FDEC378(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Shake();
};
