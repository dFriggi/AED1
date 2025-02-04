SELECT pd.name, pv.name, pd.price from products pd
inner join providers pv on pv.id = pd.id_providers
inner join categories c on c.id = pd.id_categories
where pd.price > 1000
and c.name = 'Super Luxury'
