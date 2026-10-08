// /Script/Engine.SkeletalMeshSimplificationSettings
// Derives from: UDeveloperSettings > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMeshSimplificationSettings.h

UCLASS(Config=Engine)
class USkeletalMeshSimplificationSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) FName SkeletalMeshReductionModuleName;  // 0x0038, size 0x8
};
