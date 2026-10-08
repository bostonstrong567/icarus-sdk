// /Script/Niagara.MeshTriCoordinate
// size 0x10, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceMeshCommon.h

USTRUCT()
struct FMeshTriCoordinate
{
    UPROPERTY(EditAnywhere) int32 Tri;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) FVector BaryCoord;  // 0x0004, size 0xC
};
