// /Script/Engine.ProxyLODMeshSimplificationSettings
// Derives from: UDeveloperSettings > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Engine/ProxyLODMeshSimplificationSettings.h

UCLASS(Config=Engine)
class UProxyLODMeshSimplificationSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) FName ProxyLODMeshReductionModuleName;  // 0x0038, size 0x8
};
