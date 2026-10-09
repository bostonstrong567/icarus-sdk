// /Script/Icarus.BuildingPiecesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/BuildingPieces/BuildingPiecesLibrary.h

UCLASS()
class UBuildingPiecesLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToBuildingPiecesTable(FName Name, FBuildingPiece Data, FBuildingPiecesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xD1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakBuildingPiecesEnum(FBuildingPiecesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FBuildingPiecesRowHandle CastToBuildingPiecesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FBuildingPiecesEnum A, FBuildingPiecesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FBuildingPiecesRowHandleFBuildingPiecesRowHandle(FBuildingPiecesRowHandle RowHandleA, FBuildingPiecesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetBuildingPiecesStruct(FBuildingPiecesRowHandle RowHandle, FBuildingPiece& BuildingPieces, EValid& Paths);  // parameters 0xC9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingPiecesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingPiecesRowHandle MakeBuildingPieces(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingPiecesEnum MakeBuildingPiecesEnum(FBuildingPiecesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingPiecesRowHandle MakeBuildingPiecesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingPiecesRowHandle MakeLiteralBuildingPieces(FBuildingPiecesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingPiecesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FBuildingPiecesEnum A, FBuildingPiecesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FBuildingPiecesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromBuildingPiecesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingPiecesEnum RowHandleToStruct(FBuildingPiecesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FBuildingPiecesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FBuildingPiecesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBuildingPiecesRowHandle StructToRowHandle(FBuildingPiecesEnum EnumValue);  // parameters 0x28
};
