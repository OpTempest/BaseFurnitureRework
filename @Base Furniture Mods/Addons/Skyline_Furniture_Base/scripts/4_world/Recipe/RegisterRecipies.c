modded class PluginRecipesManagerBase
{
	override void RegisterRecipies()
	{
		super.RegisterRecipies();
		RegisterRecipe(new DeCraftGunCabinet);
		RegisterRecipe(new DeCraftGunRack);
		RegisterRecipe(new DeCraftFridge);
		RegisterRecipe(new DeCraftShelf);
		RegisterRecipe(new DeCraftStorageBox);
		RegisterRecipe(new DeCraftWorkbench);
		RegisterRecipe(new CraftStorageBoxTagAmmo);
		RegisterRecipe(new CraftStorageBoxTagClothing);
		RegisterRecipe(new CraftStorageBoxTagComponent);
		RegisterRecipe(new CraftStorageBoxTagConstruction);
		RegisterRecipe(new CraftStorageBoxTagMagazine);
		RegisterRecipe(new CraftStorageBoxTagMedical);
		RegisterRecipe(new CraftStorageBoxTagTools);
		RegisterRecipe(new CraftStorageBoxTagWeapons);
	}	
}