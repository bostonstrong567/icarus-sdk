// /Script/Engine.MeshSimplificationSettings
// Derives from: UDeveloperSettings > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Engine/MeshSimplificationSettings.h

UCLASS(Config=Engine)
class UMeshSimplificationSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) FName MeshReductionModuleName;  // 0x0038, size 0x8
};
