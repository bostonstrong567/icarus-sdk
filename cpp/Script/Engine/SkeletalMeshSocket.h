// /Script/Engine.SkeletalMeshSocket
// Derives from: UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h

UCLASS(MinimalAPI)
class USkeletalMeshSocket : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName SocketName;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName BoneName;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector RelativeLocation;  // 0x0038, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FRotator RelativeRotation;  // 0x0044, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector RelativeScale;  // 0x0050, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bForceAlwaysAnimated;  // 0x005C, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetSocketLocation(USkeletalMeshComponent* SkelComp) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable) void InitializeSocketFromLocation(USkeletalMeshComponent* SkelComp, FVector WorldLocation, FVector WorldNormal);  // parameters 0x20
};
