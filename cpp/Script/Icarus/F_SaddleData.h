// /Script/Icarus.SaddleData
// size 0x150, declared in Icarus/Source/Icarus/AI/Mounts/SaddleData.h

USTRUCT()
struct FSaddleData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag SaddleTag;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMountsRowHandle> SupportedMount;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<USkeletalMesh> SkeletalMesh;  // 0x0030, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UMaterialInterface> SkeletalMeshMaterialOverride;  // 0x0058, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UAnimInstance> SaddleAnimBlueprint;  // 0x0080, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<ASeatBase> SaddleBlueprint;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AttachSocket;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> FurCullMask;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSaddlesRowHandle PsudeoSaddles;  // 0x00E0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> PassengerSaddleSockets;  // 0x00F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsRowHandle RequiredStat;  // 0x0108, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> PersistentSound;  // 0x0120, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AudioSocket;  // 0x0148, size 0x8
};
