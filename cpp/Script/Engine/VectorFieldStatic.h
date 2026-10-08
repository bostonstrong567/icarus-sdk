// /Script/Engine.VectorFieldStatic
// Derives from: UVectorField > UObject
// size 0x98, declared in Engine/Source/Runtime/Engine/Classes/VectorField/VectorFieldStatic.h

UCLASS(MinimalAPI)
class UVectorFieldStatic : public UVectorField
{
public:
    UPROPERTY(EditAnywhere) int32 SizeX;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) int32 SizeY;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) int32 SizeZ;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere) bool bAllowCPUAccess;  // 0x0054, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FVectorFieldResource * Resource;  // 0x0058
    FUntypedBulkData2<unsigned char> SourceData;  // 0x0060
    TArray<unsigned char,TSizedDefaultAllocator<32> > CPUData;  // 0x0088, private
};
