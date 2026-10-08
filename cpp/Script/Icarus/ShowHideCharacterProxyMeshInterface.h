// /Script/Icarus.ShowHideCharacterProxyMeshInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Characters/Interfaces/ShowHideCharacterProxyMeshInterface.h

UCLASS(Abstract)
class UShowHideCharacterProxyMeshInterface : public UInterface
{
public:

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void ShowHideProxyMesh(bool bShow, int32 MeshIndex);  // parameters 0x8
};
