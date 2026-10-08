// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_IM_Cage.BP_IM_Cage_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x558, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IM_Cage_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Pipe7;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Pipe6;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Pipe5;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Pipe4;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Pipe3;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Pipe2;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Pipe1;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Pipe;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Base11;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Base10;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Base9;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Base8;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Base7;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Base6;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Base5;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Base4;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Base3;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Base2;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Base1;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_IM_Cage_Base;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Slug_GasCloud_Blue_Caged;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_AudioOcclusionComponent_C* BP_AudioOcclusionComponent;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContext;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight5;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight4;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight2;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight3;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight1;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight2;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight1;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Bat3;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Bat2;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Bat1;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh13;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Mammoth;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Slug1;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Slug2;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara2;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh4;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh12;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh11;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh10;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh9;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* BatCage;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh8;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara1;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh2;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh7;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh6;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh5;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SlugCage;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh4;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh3;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh2;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* IMCage;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_Mammoth;  // 0x0510, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour3;  // 0x0518, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour2;  // 0x0520, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour1;  // 0x0528, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour5;  // 0x0530, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour4;  // 0x0538, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBlockerRemoved BlockerRemoved;  // 0x0540, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* MammothIdleMontage;  // 0x0550, size 0x8

    UFUNCTION(BlueprintCallable) void BlockerRemoved__DelegateSignature();
    UFUNCTION(BlueprintCallable) void BlowUpTheGlass();
    UFUNCTION() void ExecuteUbergraph_BP_IM_Cage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayMammothAngryMontage();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayMammothIdleMontage();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlaySlugAngryMontage();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlaySlugGasMontage();
    UFUNCTION(BlueprintCallable) void OnBlendOut_058EEFF445EBC35D3058A5B8B89F65FA(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_1EF916EA4235AF117262FC8A0BDC0339(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_86DF211248D6A3A73B14A98553488799(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_C72A535C43F01252E6DD758F66C297E8(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_058EEFF445EBC35D3058A5B8B89F65FA(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_1EF916EA4235AF117262FC8A0BDC0339(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_86DF211248D6A3A73B14A98553488799(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_C72A535C43F01252E6DD758F66C297E8(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_058EEFF445EBC35D3058A5B8B89F65FA(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_1EF916EA4235AF117262FC8A0BDC0339(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_86DF211248D6A3A73B14A98553488799(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_C72A535C43F01252E6DD758F66C297E8(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_058EEFF445EBC35D3058A5B8B89F65FA(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_1EF916EA4235AF117262FC8A0BDC0339(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_86DF211248D6A3A73B14A98553488799(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_C72A535C43F01252E6DD758F66C297E8(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_058EEFF445EBC35D3058A5B8B89F65FA(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_1EF916EA4235AF117262FC8A0BDC0339(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_86DF211248D6A3A73B14A98553488799(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_C72A535C43F01252E6DD758F66C297E8(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void PlayMammothIdleMontage();
    UFUNCTION(BlueprintCallable) void PlaySlugIdleMontage();
    UFUNCTION(BlueprintCallable) void TryPlayMontages();
};
