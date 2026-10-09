// /Script/Icarus.ArmourComponentData
// size 0x50, declared in Icarus/Source/Icarus/Characters/IcarusPlayerCharacter.h

USTRUCT()
struct FArmourComponentData
{
public:
    TArray<TSharedPtr<FStreamableHandle,0>,TSizedDefaultAllocator<32> > StreamingHandles;  // 0x0000, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FArmourRowHandle> AssociatedRowHandles;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<USkeletalMeshComponent*> ArmourComponents;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<USkeletalMeshComponent*> SimpleTPArmourComponents;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<USkeletalMeshComponent*> FPArmourComponents;  // 0x0040, size 0x10
};
